//
//  AliyunVodPlayerDefine.h
//  AliyunVodPlayerSDK
//
//  Created by SMY on 16/8/31.
//  Copyright © 2016年 SMY. All rights reserved.
//

typedef NS_ENUM(NSUInteger, AliyunVodPlayerVideoQuality) { //视频质量
    AliyunVodPlayerVideoFD = 0,        // 流畅
    AliyunVodPlayerVideoLD,            // 标清
    AliyunVodPlayerVideoSD,            // 高清
    AliyunVodPlayerVideoHD,            // 超清
    AliyunVodPlayerVideo2K,            // 2K
    AliyunVodPlayerVideo4K,            // 4K
    AliyunVodPlayerVideoOD,            // 原画
};

typedef NS_ENUM(NSUInteger, AliyunVodPlayerEvent) {       //视频事件回馈
    AliyunVodPlayerEventPrepareDone = 0,
    AliyunVodPlayerEventPlay,
    AliyunVodPlayerEventFirstFrame,
    AliyunVodPlayerEventPause,
    AliyunVodPlayerEventStop,
    AliyunVodPlayerEventFinish,
    AliyunVodPlayerEventBeginLoading,
    AliyunVodPlayerEventEndLoading,
    AliyunVodPlayerEventSeekDone
};

typedef NS_ENUM(NSUInteger, AliyunVodPlayerDisplayMode) {  //浏览方式
    /** @brief 渲染显示方式：保持原始比例 */
    AliyunVodPlayerDisplayModeFit = 0,
    /** @brief 渲染显示方式：全屏占满屏幕 */
    AliyunVodPlayerDisplayModeFitWithCropping
};

typedef NS_ENUM(NSUInteger , AliyunVodRequestMethod) {
    /** @brief 请求playAuth播放方式 */
    AliyunVodRequestMethodPlayAuth = 0,
    /** @brief 请求sts播放方式 */
    AliyunVodRequestMethodStsToken,
    /** @brief 请求mts播放方式 */
    AliyunVodRequestMethodMtsToken,
};

typedef NS_ENUM(NSUInteger, AliyunVodPlayerState) {
    /** @brief 空转，闲时，静态 */
    AliyunVodPlayerStateIdle = 0,
    /** @brief 初始化完成 */
    AliyunVodPlayerStateInitialzed,
    /** @brief 正在准备 */
    AliyunVodPlayerStatePreparing,
    /** @brief 准备完成 */
    AliyunVodPlayerStatePrepared,
    /** @brief 正在播放 */
    AliyunVodPlayerStateStarted,
    /** @brief 播放暂停 */
    AliyunVodPlayerStatePaused,
    /** @brief 播放停止 */
    AliyunVodPlayerStateStopped,
    /** @brief 播放完成 */
    AliyunVodPlayerStateCompletion,
    /** @brief 播放错误 */
    AliyunVodPlayerStateError
};

typedef NS_ENUM(NSUInteger, AliyunVodDecoderType) {
    /**
     @brief 播放器解码方式，软解码
     */
    AliyunVodPlayerDecoderHardware = 0,
    /**
     @brief 播放器解码方式，硬解码
     */
    AliyunVodPlayerDecoderSoftware
};

