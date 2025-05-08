//
//  HXMeetingService+WaitingRoom.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/7/22.
//

#import <HXMeetingSDK3/HXMeetingService.h>

@class HXMeetingUserInfoModel;

NS_ASSUME_NONNULL_BEGIN

@interface HXMeetingService (WaitingRoom)
#pragma mark 获取等待室全部成员
/**
@brief 获取等待室全部成员
 注：主持/讲人操作
@return 成员数组
*/
- (NSArray<HXMeetingUserInfoModel *> *)getWaitingRoomAllMember;

#pragma mark 将某用户从等待室转移到会议中
/**
@brief 将某用户从等待室转移到会议中
 注：主持人操作
@param memUuid  成员id
@return yes：成功
*/
- (BOOL)admitToMeetingWithMemUuid:(NSString *)memUuid IsAlwaysInMeetWhenJoin:(BOOL)isAlwaysInMeetWhenJoin;

#pragma mark 将某用户从会议转移到等待室中
/**
@brief 将某用户从等待室转移到会议中
 注：主持人操作
@param memUuid  成员id
@return yes：成功
*/
- (BOOL)putInWaitingRoomWithMemUuid:(NSString *)memUuid;

#pragma mark 将所有等待室用户转移到会议中
/**
@brief 将所有等待室用户转移到会议中
 注：主持人操作
@return yes：成功
*/
- (BOOL)admitAllToMeeting:(BOOL)isAlwaysInMeetWhenJoin;

#pragma mark 启/禁用关闭等待室
/**
@brief 启/禁用关闭等待室
 注：主持人操作
@param isEnable  yes：启用；no：禁用
@return yes：成功
*/
- (BOOL)enableWaittingRoomWithIsEnable:(BOOL)isEnable;

#pragma mark 是否打开等待室
/**
@brief 是否打开等待室
@return  yes：启用；no：禁用
*/
- (BOOL)isEnableWaitingRoom;


#pragma mark 是否允许等待室成员私聊主持人
/**
 * 是否允许等待室成员私聊主持人
 * @brief AllowPrivatechatHost
 * @param allow
 * @return
 */
- (BOOL)isAllowPrivateChatHost;


#pragma mark 设置允许/不允许等待室成员私聊主持人
/**
@brief 设置允许/不允许等待室成员私聊主持人
 注：主持人操作
@param isAllow  yes：允许；no：不允许
@return yes：成功
*/
- (BOOL)setAllowPrivateChatHostWithIsAllow:(BOOL)isAllow;
@end

NS_ASSUME_NONNULL_END
