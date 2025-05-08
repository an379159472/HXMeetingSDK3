//
//  HXMeetingService+Invite.h
//  hxhy_phone_ui_ios
//
//  Created by 李继鹏 on 2025/1/11.
//

#import <HXMeetingSDK3/HXMeetingService.h>

@class HXInvitedUserModel;

NS_ASSUME_NONNULL_BEGIN

@interface HXMeetingService (Invite)

/**
 * 邀请成员
 * @brief InviteUsers
 * @param inviteList
 */
- (BOOL)InviteUsers:(NSArray <HXInvitedUserModel *>*)inviteList PushTitle:(NSString *)pushTitle PushBody:(NSString *)pushBody;

/**
* 取消邀请
*/

- (BOOL)cancelInvite:(NSArray <HXInvitedUserModel *>*)inviteList;

/**
* 从邀请列表删除
*/
- (BOOL)delInvite:(NSArray <HXInvitedUserModel *>*)inviteList;

/**
* 获取预约受邀列表
*/

- (NSArray <HXInvitedUserModel *>*)getReserveInviteListWithSearchKey:(NSString *)key;

/**
 * 获取会中受邀列表
 */
- (NSArray <HXInvitedUserModel *>*)getInMeetInviteListWithSearchKey:(NSString *)key;

/**
* 拒绝邀请
*/
- (BOOL)refuseInvite:(NSString *)meetId inviterUserId:(NSString *)inviterUserId inviteType:(HXInviteType)inviteType;


@end

NS_ASSUME_NONNULL_END
