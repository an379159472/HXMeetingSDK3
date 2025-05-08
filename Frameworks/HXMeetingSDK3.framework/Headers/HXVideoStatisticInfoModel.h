//
//  HXVideoStatisticInfoModel.h
//  hxhy_phone_ui_ios
//
//  Created by 李继鹏 on 2025/1/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HXVideoStatisticInfoModel : NSObject\

// 发送延迟
@property (nonatomic, copy) NSString *rttSend;

// 接收延迟
@property (nonatomic, copy) NSString *rttRecv;

// 发送抖动
@property (nonatomic, copy) NSString *jitterSend;

// 接收抖动
@property (nonatomic, copy) NSString *jitterRecv;

// 发送丢包率平均
@property (nonatomic, copy) NSString *packetLossSend;

// 接收丢包率平均
@property (nonatomic, copy) NSString *packetLossRecv;

// 发送丢包最大
@property (nonatomic, copy) NSString *maxPacketLossSend;

// 接收丢包最大
@property (nonatomic, copy) NSString *maxPacketLossRecv;

// 发送码率
@property (nonatomic, copy) NSString *bitrateSend;

// 接收码率
@property (nonatomic, copy) NSString *bitrateRecv;

// 发送分辨率
@property (nonatomic, copy) NSString *resolutionSend;

// 接收分辨率
@property (nonatomic, copy) NSString *resolutionRecv;

// 发送帧率
@property (nonatomic, copy) NSString *fpsSend;

// 接收帧率
@property (nonatomic, copy) NSString *fpsRecv;

@end

NS_ASSUME_NONNULL_END
