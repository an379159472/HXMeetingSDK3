//
//  HXMeetingUserInfoModel.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/8/7.
//

#import <Foundation/Foundation.h>

#import <HXMeetingSDK3/HXMeetingParam.h>

NS_ASSUME_NONNULL_BEGIN

@interface HXMeetingUserInfoModel : NSObject<NSItemProviderWriting, NSItemProviderReading>
/*!
 @brief 会议流水号
 */
@property (nonatomic, strong) NSString *meetingUuid;

/*!
 @brief 会议ID
 */
@property (nonatomic, strong) NSString *meetingId;

/*!
 @brief 会议成员用户ID
 */
@property (nonatomic, strong) NSString *userId;

/*!
 @brief 会议成员id
 */
@property (nonatomic, strong) NSString *memUuid;

/*!
 @brief 屏幕名称
 */
@property (nonatomic, strong) NSString *userName;

/*!
 @brief 用户电话号码
 */
@property (nonatomic, strong) NSString *userTel;

/*!
 @brief 时区
 */
@property (nonatomic, strong) NSString *timezone;

/*!
 @brief 创建时间戳
 */
@property (nonatomic, assign) NSUInteger createTimestamp;

/*!
 @brief 加入时间戳
 */
@property (nonatomic, assign) NSUInteger joinTimestamp;

/*!
 @brief 离开时间戳
 */
@property (nonatomic, assign) NSUInteger leaveTimestamp;

/*!
 @brief 成员类型
 */
@property (nonatomic, assign) HXMeetingMemRoomType memRoomType;

/*!
 @brief 成员设备类型
 */                          
@property (nonatomic, assign) HXMeetingClientDeviceType memDeviceType;

/*!
 @brief 成员在会议中的状态
 */
@property (nonatomic, assign) HXMeetingMemStatus memStatus;

/*!
 @brief 会议成员角色
 */
@property (nonatomic, assign) HXMeetingMemRoleType memRoleType;

/*!
 @brief 获取举手原因
 */
@property (nonatomic, strong) NSString *handsupReason;

/*!
 @brief 获取是否允许本地录制
 */
@property (nonatomic, assign) BOOL isAllowLocalRecording;

/*!
 @brief 获取是否允许修改白板
 */
@property (nonatomic, assign) BOOL isAllowWhiteboardChange;

/*!
 @brief 获取本地录制状态
 */
@property (nonatomic, assign) HXMeetingRecordStatus localRecordingStatus;


/*!
 @brief 获取云端录制状态
 */
@property (nonatomic, assign) HXMeetingRecordStatus cloudRecordingStatus;


/*!
 @brief 是否被永久踢出本次会议
 */
@property (nonatomic, assign) BOOL isKickOut;

/*!
 @brief 焦点视频seq
 */
@property (nonatomic, assign) NSUInteger spotlightSeq;

/*!
 @brief 是否已经加入分组
 */
@property (nonatomic, assign) BOOL isInGroup;

/*!
 @brief 邀请人成员id
 */
@property (nonatomic, strong) NSString *inviterMemUuid;

/*!
 @brief 邀请人用户id
 */
@property (nonatomic, strong) NSString *inviterUserId;

/*!
 @brief 分组id
 */
@property (nonatomic, strong) NSString *groupUuid;

/*!
 @brief 成员入会时是否开启视频
 */
@property (nonatomic, assign) BOOL memOnJoinOpenVideo;

/*!
 @brief 成员入会时是否开启音频
 */
@property (nonatomic, assign) BOOL memOnJoinOpenAudio;

/*!
 @brief 音频状态
 */
@property (nonatomic, assign) HXMeetingAudioStatus audioStatus;

/*!
 @brief 音频类型
 */
@property (nonatomic, assign) HXMeetingAudioType audioType;

/*!
 @brief 视频状态
 */
@property (nonatomic, assign) HXMeetingVideoStatus videoStatus;

/*!
 @brief 视频类型
 */
@property (nonatomic, assign) HXMeetingVideoType videoType;

/*!
 @brief 共享状态
 */
@property (nonatomic, assign) HXMeetingShareStatus shareStatus;

/*!
 @brief 共享类型
 */
@property (nonatomic, assign) HXMeetingShareType shareType;

/*!
 @brief 共享是否开启音频
 */
@property (nonatomic, assign) BOOL isShareOpenAudio;

/*!
 @brief 共享是否开启视频
 */
@property (nonatomic, assign) BOOL isShareOpenVideo;

/*!
 @brief 是否是主持人
 */
@property (nonatomic, assign) BOOL isHost;

/*!
 @brief 是否是主讲人
 */
@property (nonatomic, assign) BOOL isCoHost;

/*!
 @brief 是否是自身
 */
@property (nonatomic, assign) BOOL isMe;

/*!
 @brief 用户的视频状态
 */
@property (nonatomic, assign) BOOL isVideoOn;

/*!
 @brief 用户的音频状态
 */
@property (nonatomic, assign) BOOL isAudioOn;

/*!
 @brief 是否在等待室中
 */
@property (nonatomic, assign) BOOL isInWaitingRoom;

/*!
 @brief 是否举手
 */
@property (nonatomic, assign) BOOL isRaiseHand;

///*!
// @brief 电平值
// */
//@property (nonatomic, assign) NSUInteger audioLevel;

/*!
 @brief 是否置顶
 */
@property (nonatomic, assign) BOOL isTop;

/*!
 @brief 是否焦点视频
 */
@property (nonatomic, assign) BOOL isSpotlight;


/*!
 @brief 判断视频是否锁定
 */
@property (nonatomic, assign) BOOL isVideoLocked;

/*!
 @brief 用户头像
 */
@property (nonatomic, strong) NSString * userAvatar;


/*!
 @brief 基本信息变化包括（音频状态，视频状态，改名）
 */
@property (nonatomic, copy) void (^basicInfoChangeBlock)(void);

// 是否选中，本地操作使用
@property (nonatomic, assign) BOOL isSelect;

/*!
 @brief 发起的白板uuid
 */
@property (nonatomic, strong) NSString *whiteBoardUUid;

@end

NS_ASSUME_NONNULL_END
