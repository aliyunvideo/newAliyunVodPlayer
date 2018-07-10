//
//  AliVcCallBack.h
//  AliVcPlayer
//
//  Created by 王凯 on 2018/4/25.
//  Copyright © 2018年 com.alibaba.AliyunPlayer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AliVcPlayerInfoModel.h"
#import "AliyunVodPlayerDefine.h"

@class AliyunVodPlayer;

/**
 AliVcPlayerCallBack  播放器的代理协议
 */
@protocol AliVcPlayerCallBack <NSObject>

@optional

/**
 @brief 错误代理回调
 @param player 播放器player指针
 @param errorModel 播放器错误描述，参考AliVcPlayerErrorModel
 */
- (void)onError:(AliyunVodPlayer*)player errorModel:(AliVcPlayerErrorModel *)errorModel;

/**
 @brief 播放器准备完成回调
 @param player 播放器player指针
 */
- (void)onPrepare:(AliyunVodPlayer*)player;

/**
 @brief 播放器播放完成回调
 @param player 播放器player指针
 */
- (void)onCompletion:(AliyunVodPlayer*)player;

/**
 @brief 播放器首帧渲染回调
 @param player 播放器player指针
 */
- (void)onFirstFrameShow:(AliyunVodPlayer*)player;

/**
 @brief 视频大小变化回调
 @param player 播放器player指针
 @param width 视频宽度
 @param height 视频高度
 @param rotation 视频旋转角度
 */
- (void)onVideoSizeGetWithRotation:(AliyunVodPlayer*)player width:(int)width height:(int)height rotation:(int)rotation;

/**
 @brief 视频当前播放位置回调
 @param player 播放器player指针
 @param position 视频当前播放位置
 */
- (void)onCurrentPositionUpdate:(AliyunVodPlayer*)player position:(int64_t)position;

/**
 @brief 视频缓存位置回调
 @param player 播放器player指针
 @param position 视频当前缓存位置
 */
- (void)onBufferPositionUpdate:(AliyunVodPlayer*)player position:(int64_t)position;

/**
 @brief 视频开始缓冲回调
 @param player 播放器player指针
 */
- (void)onLoadingStart:(AliyunVodPlayer*)player;

/**
 @brief 视频缓冲进度回调
 @param player 播放器player指针
 @param progress 缓存进度0-100
 */
- (void)onLoadingProgress:(AliyunVodPlayer*)player progress:(float)progress;

/**
 @brief 视频缓冲结束回调
 @param player 播放器player指针
 */
- (void)onLoadingEnd:(AliyunVodPlayer*)player;

/**
 @brief 获取视频码流信息回调
 @param player 播放器player指针
 @param info 视频码流信息数组 参考AliVcPlayerVideoStreamInfo
 */
- (void)onVideoStreamInfoGetInfo:(AliyunVodPlayer*)player info:(NSArray<AliVcPlayerVideoStreamInfo*>*)info;

/**
 @brief 获取音频码流信息回调
 @param player 播放器player指针
 @param info 音频码流信息数组 参考AliVcPlayerAudioStreamInfo
 */
- (void)onAudioStreamInfoGetInfo:(AliyunVodPlayer*)player info:(NSArray<AliVcPlayerAudioStreamInfo*>*)info;

/**
 @brief 获取字幕码流信息回调
 @param player 播放器player指针
 @param info 字幕码流信息数组 参考AliVcPlayerSubtitleStreamInfo
 */
- (void)onSubtitleStreamInfoGetInfo:(AliyunVodPlayer*)player info:(NSArray<AliVcPlayerSubtitleStreamInfo*>*)info;

/**
 @brief 字幕切换完成回调
 @param player 播放器player指针
 @param info 切换后的字幕信息 参考AliVcPlayerSubtitleStreamInfo
 */
- (void)onSubtitleStreamInfoChanged:(AliyunVodPlayer*)player info:(AliVcPlayerSubtitleStreamInfo*)info;

/**
 @brief 音频切换完成回调
 @param player 播放器player指针
 @param info 切换后的音频信息 参考AliVcPlayerAudioStreamInfo
 */
- (void)onAudioStreamInfoChanged:(AliyunVodPlayer*)player info:(AliVcPlayerAudioStreamInfo*)info;

/**
 @brief 视频切换完成回调
 @param player 播放器player指针
 @param info 切换后的视频信息 参考AliVcPlayerVideoStreamInfo
 */
- (void)onVideoStreamInfoChanged:(AliyunVodPlayer*)player info:(AliVcPlayerVideoStreamInfo*)info;

/**
 @brief 字幕显示回调
 @param player 播放器player指针
 @param index 字幕显示的索引号
 @param subtitle 字幕显示的字符串
 */
- (void)onShowSubtitle:(AliyunVodPlayer*)player index:(int)index subtitle:(NSString *)subtitle;

/**
 @brief 字幕隐藏回调
 @param player 播放器player指针
 @param index 字幕显示的索引号
 */
- (void)onHideSubtitle:(AliyunVodPlayer*)player index:(int)index;

/**
 @brief 获取缩略图成功回调
 @param positionMs 指定的缩略图位置
 @param image 缩图略图像指针
 */
- (void)onGetThumbSuc:(long)positionMs image:(UIImage*)image;

/**
 @brief 获取缩略图失败回调
 @param positionMs 指定的缩略图位置
 */
- (void)onGetThumbFailed:(long)positionMs;

/**
 @brief 播放器状态改变回调
 @param player 播放器player指针
 @param oldStatus 老的播放器状态 参考AliyunVodPlayerState
 @param newStatus 新的播放器状态 参考AliyunVodPlayerState
 */
- (void)onPlayerStatusChanged:(AliyunVodPlayer*)player oldStatus:(AliyunVodPlayerState)oldStatus newStatus:(AliyunVodPlayerState)newStatus;

@end
