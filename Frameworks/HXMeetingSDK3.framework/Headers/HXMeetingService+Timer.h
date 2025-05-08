//
//  HXMeetingService+Timer.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2025/3/1.
//

#import <HXMeetingSDK3/HXMeetingService.h>

@class HXMeetingTimerInfoModel;

NS_ASSUME_NONNULL_BEGIN

@interface HXMeetingService (Timer)
#pragma mark 是否可以开启定时器
/**
 * 是否可以开启定时器
 * @return 结果
 */
- (BOOL)canStatrTimer;

#pragma mark 开始定时器
/**
 * 开始定时器
 * @param timerModel 倒计时模型
 * @return 结果
 */
- (BOOL)startTimer:(HXMeetingTimerInfoModel *)timerModel;

#pragma mark 暂停定时器 operTimestamp 暂停时间戳; countSec 正计时时代表-时长 倒计时代表-剩余倒计时时间
/**
 * 暂停定时器
 * @param operTimestamp 暂停时间戳
 * @param countSec 正计时时代表-时长 倒计时代表-剩余倒计时时间
 * @return 结果
 */
- (BOOL)pauseTimer:(int)operTimestamp CountSec:(int)countSec;

#pragma mark 恢复定时器 operTimestamp 恢复时间戳; countSec 正计时时代表-时长 倒计时代表-剩余倒计时时间
/**
 * 恢复定时器
 * @param operTimestamp 暂停时间戳
 * @param countSec 正计时时代表-时长 倒计时代表-剩余倒计时时间
 * @return 结果
 */
- (BOOL)resumeTimer:(int)operTimestamp CountSec:(int)countSec;

#pragma mark 停止定时器
/**
 * 停止定时器
 * @return 结果
 */
- (BOOL)stopTimer;

#pragma mark 添加计时器成员（开启定时器时有效，必须主持人）
/**
 * 添加计时器成员（开启定时器时有效，必须主持人）
 * @param memUuid 会议成员id
 * @return 结果
 */
- (BOOL)addTimerMember:(NSString *)memUuid;

#pragma mark 删除计时器成员（开启定时器时有效，必须主持人，不能删除自己）
/**
 * 删除计时器成员（开启定时器时有效，必须主持人，不能删除自己）
 * @param memUuid 会议成员id
 * @return 结果
 */
- (BOOL)delTimerMumber:(NSString *)memUuid;

#pragma mark 设置“向所有人展示计时器”（开启定时器时有效，必须主持人）
/**
 * 设置“向所有人展示计时器”（开启定时器时有效，必须主持人）
 * @param isToAll yes：是
 * @return 结果
 */
- (BOOL)setShowTimerToAll:(BOOL)isToAll;

#pragma mark 获取当前运行的定时器
/**
 * 获取当前运行的定时器
 * @return 结果
 */
- (HXMeetingTimerInfoModel *)getTimerInfo;
@end

NS_ASSUME_NONNULL_END
