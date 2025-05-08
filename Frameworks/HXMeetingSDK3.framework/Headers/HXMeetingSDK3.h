//
//  HXMeetingSDK3.h
//  HXMeetingSDK3
//
//  Created by 李继鹏 on 2025/4/14.
//

#import <Foundation/Foundation.h>

//! Project version number for HXMeetingSDK3.
FOUNDATION_EXPORT double HXMeetingSDK3VersionNumber;

//! Project version string for HXMeetingSDK3.
FOUNDATION_EXPORT const unsigned char HXMeetingSDK3VersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <HXMeetingSDK3/PublicHeader.h>


// 使用尖括号包含框架公开头文件
// SDK3主要外露文件
#import <HXMeetingSDK3/HXiOSMeetingSDK.h>

// 屏幕共享
#import <HXMeetingSDK3/HXRtcScreenCapturerExt.h>

// 外露常量类
#import <HXMeetingSDK3/HXConstants.h>

// 使用枚举类
#import <HXMeetingSDK3/HXMeetingParam.h>

// 会议相关类
#import <HXMeetingSDK3/HXMeetingService.h>
#import <HXMeetingSDK3/HXMeetingService+Participants.h>
#import <HXMeetingSDK3/HXMeetingService+Audio.h>
#import <HXMeetingSDK3/HXMeetingService+Video.h>
#import <HXMeetingSDK3/HXMeetingService+Http.h>
#import <HXMeetingSDK3/HXMeetingService+Recording.h>
#import <HXMeetingSDK3/HXMeetingService+WaitingRoom.h>
#import <HXMeetingSDK3/HXMeetingService+Chat.h>
#import <HXMeetingSDK3/HXMeetingService+Setting.h>
#import <HXMeetingSDK3/HXMeetingService+Share.h>
#import <HXMeetingSDK3/HXMeetingService+Invite.h>
#import <HXMeetingSDK3/HXMeetingService+Permission.h>
#import <HXMeetingSDK3/HXMeetingService+Timer.h>
#import <HXMeetingSDK3/HXMeetingService+WhiteBoard.h>
#import <HXMeetingSDK3/HXMeetingService+Group.h>
#import <HXMeetingSDK3/HXMeetingService+H323.h>


// 会议相关代理
#import <HXMeetingSDK3/HXMeetingDelegate.h>

// 使用的数据模型
#import <HXMeetingSDK3/HXThumbnailInfoModel.h>
#import <HXMeetingSDK3/HXMeetingUserInfoModel.h>
#import <HXMeetingSDK3/HXInvitedUserModel.h>
#import <HXMeetingSDK3/HXVirtualBGImageInfo.h>
#import <HXMeetingSDK3/HXBeautyParam.h>
#import <HXMeetingSDK3/HXOrderMeetClashModel.h>
#import <HXMeetingSDK3/HXMeetingCreateParamModel.h>
#import <HXMeetingSDK3/HXMeetingH323DeviceModel.h>
#import <HXMeetingSDK3/HXCameraInfoModel.h>
#import <HXMeetingSDK3/HXMeetingParameterModel.h>
#import <HXMeetingSDK3/HXShareItemInfoModel.h>
#import <HXMeetingSDK3/HXMeetingJoinParamModel.h>
#import <HXMeetingSDK3/HXIcoInfoModel.h>
#import <HXMeetingSDK3/HXMeetingUserAudioStatusModel.h>
#import <HXMeetingSDK3/HXHttpErrorModel.h>
#import <HXMeetingSDK3/HXAudioStatisticInfoModel.h>
#import <HXMeetingSDK3/HXMeetingInfoModel.h>
#import <HXMeetingSDK3/HXVideoStatisticInfoModel.h>
#import <HXMeetingSDK3/HXShareRectModel.h>
#import <HXMeetingSDK3/HXMicInfoModel.h>
#import <HXMeetingSDK3/HXMeetingCreateOrderMeetingModel.h>
#import <HXMeetingSDK3/HXMeetingChatModel.h>
#import <HXMeetingSDK3/HXShareItemInfoModel.h>
#import <HXMeetingSDK3/HXMeetingGroupOptionModel.h>
#import <HXMeetingSDK3/HXJoinMeetingHistoryModel.h>
#import <HXMeetingSDK3/HXWhiteBoardAssistModel.h>
#import <HXMeetingSDK3/HXMeetingGroupModel.h>
#import <HXMeetingSDK3/HXSpeakerInfoModel.h>
#import <HXMeetingSDK3/HXPersonalMeetingSettingsModel.h>
#import <HXMeetingSDK3/HXStatisticInfoModel.h>
#import <HXMeetingSDK3/HXMeetingCreateSettingsModel.h>
#import <HXMeetingSDK3/HXMeetingTimerInfoModel.h>
#import <HXMeetingSDK3/HXWhiteBoardPageModel.h>
#import <HXMeetingSDK3/HXShareInfoModel.h>

// 渲染view
#import <HXMeetingSDK3/HXSDKNormalVideoView.h>
#import <HXMeetingSDK3/HXSDKWhiteBoardView.h>
#import <HXMeetingSDK3/HXSDKShareRenderView.h>
#import <HXMeetingSDK3/HXSDKActiveVideoView.h>
#import <HXMeetingSDK3/HXSDKPreviewVideoView.h>
