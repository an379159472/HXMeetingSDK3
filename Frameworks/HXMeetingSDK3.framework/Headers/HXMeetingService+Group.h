//
//  HXMeetingService+Group.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/7/22.
//
#import <HXMeetingSDK3/HXMeetingService.h>

NS_ASSUME_NONNULL_BEGIN

@interface HXMeetingService (Group)

//#pragma mark - GroupInfomation
//#pragma mark 获取分组状态
///*!
//@brief 获取分组状态
//@return HXMeetingGroupState 分组状态枚举
//*/
//- (HXMeetingGroupState)getGroupState;
//
//#pragma mark 获取分组模式
///*!
//@brief 获取分组模式
//@return HXMeetingGroupMode 分组模式枚举
//*/
//- (HXMeetingGroupMode)getGroupMode;
//
//#pragma mark 获取分组列表数据
///*!
//@brief 获取分组列表数据
//@return 分组模型数组
//*/
//- (NSArray <HXMeetingGroupModel *>*)getGroups;
//
//#pragma mark 获取未分配分组成员列表
///*!
//@brief 获取未分配分组成员列表
//@return 未分配成员id数组
//*/
//- (NSArray <NSString *>*)getUnassginedMems;
//
//
//#pragma mark 获取组成员状态，未分组、分组中未加入讨论、已经加入讨论
///*!
//@brief 获取组成员状态，未分组、分组中未加入讨论、已经加入讨论
//@param memUuid  成员id
//@return 分组成员状态
//*/
//- (HXMeetingGroupUserStatus)getGroupUserStatus:(NSString *)memUuid;
//
//#pragma mark - MasterMeetingOper
//#pragma mark 创建会议分组
///*!
//@brief 创建会议分组  
// 注：操作者必须是主持人
//@param state  分组状态
//@param mode  分组模式
//@param groupNum  分组数量
//@return yes：成功
//*/
//- (BOOL)createGroupWithGroupState:(HXMeetingGroupState)state GroupMode:(HXMeetingGroupMode)mode GroupNum:(NSUInteger)groupNum;
//
//#pragma mark 添加一个分组
///*!
//@brief 添加一个分组  
// 注：操作者必须是主持人
//@param name  分组名称
//@return yes：成功
//*/
//- (BOOL)addGroupWithGroupName:(NSString *)name;
//
//#pragma mark 删除一个分组
///*!
//@brief 删除一个分组 
// 注：操作者必须是主持人
//@param uuid  分组id
//@return yes：成功
//*/
//- (BOOL)delGroupWithGroupUuid:(NSString *)uuid;
//
//#pragma mark 修改分组名称
///*!
//@brief 修改分组名称  
// 注：操作者必须是主持人
//@param uuid  分组id
//@param name  分组新名称
//@return yes：成功
//*/
//- (BOOL)editGroupNameWithGroupUuid:(NSString *)uuid GroupName:(NSString *)name;
//
//#pragma mark 设置分组参数
///*!
//@brief 设置分组参数  
// 注：操作者必须是主持人
//@param model  分组参数
//@return yes：成功
//*/
//- (BOOL)setGroupOptionWithGroupOption:(HXMeetingGroupOptionModel *)model;
//
//#pragma mark 获取分组参数
///*!
//@brief 获取分组参数
//@return 分组参数模型
//*/
//- (HXMeetingGroupOptionModel *)getGroupOption;
//
//#pragma mark 开始分组讨论
///*!
//@brief 开始分组讨论  
// 注：操作者必须是主持人
//@return yes：成功
//*/
//- (BOOL)startGroupMeeting;
//
//#pragma mark 停止分组讨论
///*!
//@brief 停止分组讨论
// 注：操作者必须是主持人
//@return yes：成功
//*/
//- (BOOL)stopGroupMeeting;
//
//#pragma mark 移动分组成员
///*!
//@brief 移动分组成员
// 注：主持人：移动分组成员，包括主会议中分组调整和成员从一个分会议中移动到其他分会议中/主会议中
//    非主持人： meet.is_allow_group_select==true并且meet.group.mode==3时可以调整自己的分组
//    非主持人调整自己的时候 userUUidList空即可
// 
//@param memberList  成员id数组
//@param toGroupUuid  新分组id
//@return yes：成功
//*/
//- (BOOL)transferMemberWithMemberList:(NSArray<NSString *>*)memberList ToGroupUuid:(NSString *)toGroupUuid;
//
//#pragma mark 发送广播
///*!
//@brief 发送广播
// 注：操作者必须是主持人
//@return yes：成功
//*/
//- (BOOL)sendBroadastMessage:(NSString *)msg;
//
//#pragma mark - GroupMeetingOper
//#pragma mark 邀请主持人进入分会场
///*!
//@brief 邀请主持人进入分会场
//@return yes：成功
//*/
//- (BOOL)requestGroupHostJoin;
//
//#pragma mark 获取主会场uuid
///*!
//@brief 获取主会场uuid
//@return 主会场uuid
//*/
//- (NSString *)getMasterUuid;
//
//#pragma mark 是否可以返回主会议
///*!
//@brief 是否可以返回主会议
//@return yes：可以  no：禁止
//*/
//- (BOOL)isAllowReturnToMainMeeting;
//
//#pragma mark - MeetingTransfer
//#pragma mark 会议跳转
///*!
//@brief 会议跳转
//@param uuid  会议id
//@return yes：成功
//*/
//- (BOOL)transferMeetingWithMeeingUuid:(NSString *)uuid;
//
//#pragma mark - MeetingGroupController
//#pragma mark 判断当前会议是主会议还是分组会议
///*!
//@brief 判断当前会议是主会议还是分组会议
//@return yes：分组会议中；no：主会议中
//*/
//- (BOOL)isInGroupMeeting;

@end

NS_ASSUME_NONNULL_END
