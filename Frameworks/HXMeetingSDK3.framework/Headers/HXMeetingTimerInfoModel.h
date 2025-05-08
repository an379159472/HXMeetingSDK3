//
//  HXMeetingTimerInfoModel.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2025/3/1.
//

#import <Foundation/Foundation.h>

#import <HXMeetingSDK3/HXMeetingParam.h>

NS_ASSUME_NONNULL_BEGIN

@interface HXMeetingTimerInfoModel : NSObject
@property (nonatomic, strong) NSArray<NSString *> *memUuidList;

@property (nonatomic, assign) HXTimerTimingType timingType;

@property (nonatomic, copy) NSString * curUuid;

@property (nonatomic, assign) HXTimerStatus timerStatus;

///最后操作的时间戳
@property (nonatomic, assign) int operTimestamp;

///倒计时总时长
@property (nonatomic, assign) int countDownDuration;

///倒计时剩余
@property (nonatomic, assign) int countDownRemaining;

///正计时总时长
@property (nonatomic, assign) int stopWatchDuration;

///主持人发起的 (发起的时候不用传，收到的时候需要解)
@property (nonatomic, assign) BOOL isHostOper;

///主持人发起的 (发起的时候不用传，收到的时候需要解)
@property (nonatomic, assign) BOOL isShowToAll;

@end

NS_ASSUME_NONNULL_END
