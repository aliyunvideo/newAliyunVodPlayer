//
//  AliVcErrorModel.h
//  AliVcPlayer
//
//  Created by 王凯 on 2018/4/25.
//  Copyright © 2018年 com.alibaba.AliyunPlayer. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 @brief AliyunVodPlayerVideo为播放视频信息，prepareDone时候返回该类信息
 */
@interface AliyunVodPlayerVideo : NSObject

/**
 @brief videoId为视频ID
 */
@property (nonatomic, strong) NSString *videoId;

/**
 @brief title为视频显示的标题
 */
@property (nonatomic, strong) NSString *title;

/**
 @brief duration为视频总时长，单位为秒
 */
@property (nonatomic, assign) double duration;

/**
 @brief coverUrl为视频封面
 */
@property (nonatomic,copy) NSString *coverUrl;

/**
 @brief activityName
 */
@property (nonatomic, copy) NSString *activityName;

/**
 @brief bitrate码率信息
 */
@property (nonatomic, copy) NSString *bitrate;

/**
 @brief definition清晰度信息
 */
@property (nonatomic, copy) NSString *definition;

/**
 @brief encryption加密信息
 */
@property (nonatomic, copy) NSString *encryption;

/**
 @brief format格式信息
 */
@property (nonatomic, copy) NSString *format;

/**
 @brief fps帧率信息
 */
@property (nonatomic, copy) NSString *fps;

/**
 @brief height视频高度
 */
@property (nonatomic, copy) NSString *height;

/**
 @brief size视频大小
 */
@property (nonatomic, copy) NSString *size;

/**
 @brief streamType
 */
@property (nonatomic, copy) NSString *streamType;

/**
 @brief width视频宽度
 */
@property (nonatomic, copy) NSString *width;

/**
 @brief playUrl播放地址
 */
@property (nonatomic, copy) NSString *playUrl;

@end


/**
 @brief AliVcPlayerErrorModel为播放错误信息描述
 */
@interface AliVcPlayerErrorModel : NSObject

/**
 @brief code为播放错误信息code
 */
@property (nonatomic, assign) int code;

/**
 @brief message为播放错误信息描述
 */
@property (nonatomic, copy) NSString *message;

/**
 @brief requestId为播放错误信息requestID
 */
@property (nonatomic, copy) NSString *requestId;

/**
 @brief videoId为播放错误发生的videoID
 */
@property (nonatomic, copy) NSString *videoId;

@end


/**
 @brief AliVcPlayerSubtitleStreamInfo为字幕流信息描述
 */
@interface AliVcPlayerSubtitleStreamInfo : NSObject

/**
 @brief streamId为字幕流的stream index
 */
@property (nonatomic, assign) int streamId;

/**
 @brief subLang为字幕流的语言ID描述
 */
@property (nonatomic, copy) NSString *subLang;

/**
 @brief langDescription为字幕流的语言描述
 */
@property (nonatomic, copy) NSString *langDescription;
@end

/**
 @brief AliVcPlayerAudioStreamInfo为音频流信息描述
 */
@interface AliVcPlayerAudioStreamInfo : NSObject

/**
 @brief streamId为音频流的stream index
 */
@property (nonatomic, assign) int streamId;

/**
 @brief audioLang为音频流的ID描述
 */
@property (nonatomic, copy) NSString *audioLang;

/**
 @brief langDescription为音频流的描述
 */
@property (nonatomic, copy) NSString *langDescription;
@end

/**
 @brief AliVcPlayerVideoStreamInfo为视频流信息描述
 */
@interface AliVcPlayerVideoStreamInfo : NSObject

/**
 @brief streamId为视频流的stream index
 */
@property (nonatomic, assign) int streamId;

/**
 @brief videoBrand为视频流的档位信息
 */
@property (nonatomic, assign) int videoBrand;

/**
 @brief videoWidth为视频流的宽度
 */
@property (nonatomic, assign) int videoWidth;

/**
 @brief videoWidth为视频流的高度
 */
@property (nonatomic, assign) int videoHeight;
@end

/**
 @brief AliVcPlayerVideoThumbnailInfo为缩略图信息描述
 */
@interface AliVcPlayerVideoThumbnailInfo : NSObject

/**
 @brief thumbStart缩截图所表示时间区域的开始时间，单位：ms
 */
@property (nonatomic, assign) long thumbStart;

/**
 @brief thumbPath缩截图所表示时间区域的结束时间，单位：ms
 */
@property (nonatomic, assign) long thumbUntil;

/**
 @brief thumbPath图片路径
 */
@property (nonatomic, copy  ) NSString *thumbPath;

/**
 @brief thumbLeft左边位置
 */
@property (nonatomic, assign) int thumbLeft;

/**
 @brief thumbLeft上边位置
 */
@property (nonatomic, assign) int thumbTop;

/**
 @brief thumbWidth宽度
 */
@property (nonatomic, assign) int thumbWidth;

/**
 @brief thumbHeight高度
 */
@property (nonatomic, assign) int thumbHeight;
@end


/**
 @brief AliyunPlayerVideoTimeShiftModel直播时移描述
 */
@interface AliyunPlayerVideoTimeShiftModel : NSObject

/**
 @brief startTime直播时移开始时间
 */
@property (nonatomic, assign) NSTimeInterval startTime;

/**
 @brief endTime直播时移结束时间
 */
@property (nonatomic, assign) NSTimeInterval endTime;

/**
 @brief currentTime直播时移当前时间
 */
@property (nonatomic, assign) NSTimeInterval currentTime;
@end

