//
//  AliyunVodPlayer.h
//  AliyunVodPlayerSDK
//
//  Created by 王凯 on 2018/5/9.
//  Copyright © 2018年 com.alibaba.AliyunPlayer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AliVcPlayerInfoModel.h"
#import "AliVcPlayerCallBack.h"
#import "AliVcPlayerErrorCode.h"
#import "AliyunVodPlayerDefine.h"

@class AliyunPlayerVideoTimeShiftModel;
@class AliyunVodPlayerVideo;

@interface AliyunVodPlayer : NSObject

/**
 @brief 用vid和sts来播放视频，临时AccessKeyId、AccessKeySecret和SecurityToken：开启RAM授权，并通过STS授权系统提供的OpenAPI或SDK获取的AccessKeyId、AccessKeySecret和SecurityToken，用于播放和下载请求参数明细：https://help.aliyun.com/document_detail/28788.html?spm=5176.doc28787.6.706.2G5SLS
 @param vid 视频播放的vid标识
 @param accessKeyId 用户sts的accessKey ID
 @param accessKeySecret 用户sts的accessKey secret
 @param securityToken 用户sts的token信息
 */
- (void)prepareWithVid:(NSString *)vid
           accessKeyId:(NSString *)accessKeyId
       accessKeySecret:(NSString *)accessKeySecret
         securityToken:(NSString *)securityToken;

/**
 @brief 用vid和MPS信息来播放视频，视频转码服务用户使用播放方式。部分参数参考:https://help.aliyun.com/document_detail/53522.html?spm=5176.doc53534.2.5.mhSfOh
 @param vid 视频播放的vid标识
 @param accId 用户sts的accessKey ID
 @param accSecret 用户sts的accessKey secret
 @param stsToken 用户sts的token信息
 @param authInfo 用户authInfo信息
 @param region 用户region信息
 @param playDomain 用户playDomain信息
 @param mtsHlsUriToken 用户mtsHlsUriToken信息
 */
- (void)prepareWithVid:(NSString*)vid
                 accId:(NSString *)accId
             accSecret:(NSString*)accSecret
              stsToken:(NSString*)stsToken
              authInfo:(NSString*)authInfo
                region:(NSString*)region
            playDomain:(NSString*)playDomain
        mtsHlsUriToken:(NSString*)mtsHlsUriToken;

/**
 @brief 播放视频地址接口，需要先调用setDataSourceWithUrl设置视频播放地址
 */
-(void)prepareAsync;

/**
 @brief 开始播放
 */
-(void)start;

/**
 @brief 暂停播放
 */
-(void)pause;

/**
 @brief 暂停后恢复播放
 */
-(void)resume;

/**
 @brief 停止播放
 */
-(void)stop;

/**
 @brief 销毁播放器
 */
-(void)destory;

/**
 @brief 跳转到指定的播放位置
 @param time 新的播放位置
 */
-(void)seekToTime:(NSTimeInterval)time;

/**
 @brief 设置播放器播放地址
 @param url 播放地址
 */
-(void)setDataSourceWithUrl:(NSURL *)url;

/**
 @brief 设置是否静音
 @param bMute YES代表静音
 */
-(void)mute:(BOOL)bMute;

/**
 @brief 设置播放器解码方式
 @param type AliyunVodPlayerDecoderHardware或者AliyunVodPlayerDecoderSoftware方式
 */
-(void)setDecoderType:(AliyunVodDecoderType)type;

/**
 @brief 获取指定位置的缩略图
 @param positionMs 代表在哪个指定位置的缩略图
 */
-(void)getThumbnail:(long)positionMs;

/**
 @brief 设置播放器的视图playerView
 */
@property(nonatomic, strong) UIView *playerView;

/**
 @brief 获取视频的宽度
 */
@property (nonatomic, readonly) int width;

/**
 @brief 获取视频的高度
 */
@property (nonatomic, readonly) int height;

/**
 @brief 获取/设置播放器的音量
 */
@property (nonatomic, assign) float volume;

/**
 @brief 获取视频的长度
 */
@property (nonatomic, readonly) NSTimeInterval duration;

/**
 @brief 设置代理，参考AliVcPlayerCallBack
 */
@property (nonatomic, weak) id<AliVcPlayerCallBack> delegate;

/**
 @brief 切换字幕流 参考AliVcPlayerSubtitleStreamInfo
 @param info 设置需要切换的字幕流格式
 */
-(void)switchSubtitleStream : (AliVcPlayerSubtitleStreamInfo*)info;

/**
 @brief 切换音频流 参考AliVcPlayerAudioStreamInfo
 @param info 设置需要切换的音频流格式
 */
-(void)switchAudioStream : (AliVcPlayerAudioStreamInfo*)info;

/**
 @brief 切换视频流 参考AliVcPlayerVideoStreamInfo
 @param info 设置需要切换的视频流格式
 */
-(void)switchVideoStream : (AliVcPlayerVideoStreamInfo*)info;

/**
 @brief 获取当前播放的视频流的信息 参考AliVcPlayerVideoStreamInfo
 */
@property (nonatomic, readonly) AliVcPlayerVideoStreamInfo* videoStreamInfo;

/**
 @brief 获取当前播放的音频流的信息 参考AliVcPlayerAudioStreamInfo
 */
@property (nonatomic, readonly) AliVcPlayerAudioStreamInfo* audioStreamInfo;

/**
 @brief 获取当前播放的字幕流的信息 参考AliVcPlayerSubtitleStreamInfo
 */
@property (nonatomic, readonly) AliVcPlayerSubtitleStreamInfo* subtitleStreamInfo;

/**
 @brief 设置视频显示方式 参考AliyunVodPlayerDisplayMode
 */
@property (nonatomic,assign) AliyunVodPlayerDisplayMode displayMode;

/**
 @brief 设置视频亮度
 */
@property (nonatomic, readwrite)  float brightness;

/**
 @brief 获取sts播放时音视频的参数信息，参考AliyunVodPlayerVideo
 */
@property (nonatomic, readonly) AliyunVodPlayerVideo *playerVideo;

/**
 @brief 获取视频缩略图信息，参考AliVcPlayerVideoThumbnailInfo
 @return 缩略图信息数组
 */
- (NSArray<AliVcPlayerVideoThumbnailInfo *> *)getVideoThumbnailInfos;

/**
 @brief 获取SDK版本号信息
 */
- (NSString*) getSDKVersion; 

/**
 @brief 直播时移，设置直播时间
 */
@property (nonatomic, assign) NSTimeInterval liveTime;

/**
 @brief 直播时移，设置当前播放时间
 */
@property (nonatomic, assign) NSTimeInterval currentPlayTime;

/**
 @brief 直播时移，每60秒更新用户时移时间，参考AliyunPlayerVideoTimeShiftModel
 */
@property (nonatomic, strong) AliyunPlayerVideoTimeShiftModel *timeShiftModel;

/**
 @brief 直播时移，打开直播时移播放地址
 @param liveTimeUrl 直播时移播放地址
 */
- (void)prepareWithLiveTimeUrl:(NSURL *)liveTimeUrl;

/**
 @brief 直播时移，设置直播时移地址
 @param liveTimeShiftUrl 直播时移请求地址
 */
- (void)setLiveTimeShiftUrl:(NSString*)liveTimeShiftUrl;

/**
 @brief 直播时移，跳转到指定时移位置
 @param startTime 跳转到直播startTime位置
 */
- (void)seekToLiveTime:(NSTimeInterval)startTime;

@property (nonatomic, readonly) AliyunVodPlayerState playerState;

@property (nonatomic, readonly) NSTimeInterval currentTime;

@property (nonatomic, readonly) NSTimeInterval bufferPosition;

@end
