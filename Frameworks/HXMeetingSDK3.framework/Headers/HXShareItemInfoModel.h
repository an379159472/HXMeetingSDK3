//
//  HXShareItemInfoModel.h
//  hxhy_phone_ui_ios
//
//  Created by 李继鹏 on 2024/11/19.
//

#import <UIKit/UIKit.h>

#import <HXMeetingSDK3/HXShareRectModel.h>

#import <HXMeetingSDK3/HXMeetingParam.h>

#import <HXMeetingSDK3/HXIcoInfoModel.h>

#import <HXMeetingSDK3/HXThumbnailInfoModel.h>


NS_ASSUME_NONNULL_BEGIN

@interface HXShareItemInfoModel : NSObject

// 详细 \link ShareType \endlink
@property (nonatomic, assign) HXShareType type;

// 屏幕设备名称
@property (nonatomic, copy) NSString *monitorId;

// shareType的值为SHARE_TYPE_DESKTOP 屏幕名称 其他为app标题
@property (nonatomic, copy) NSString *title;

// ico信息
@property (nonatomic, strong) HXIcoInfoModel *ico;

// 缩略图信息
@property (nonatomic, strong) HXThumbnailInfoModel *thumbnail;

// 共享区域
@property (nonatomic, strong) HXShareRectModel *rect;

// 窗口句柄 ShareType值为SHARE_TYPE_APP SHARE_TYPE_WHITE_BOARD，否则它无效。
@property (nonatomic, strong) UIView *hwnd;

@end

NS_ASSUME_NONNULL_END
