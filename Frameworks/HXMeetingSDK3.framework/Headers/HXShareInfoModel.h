//
//  HXShareInfoModel.h
//  hxhy_phone_ui_ios
//
//  Created by 李继鹏 on 2024/11/19.
//

#import <UIKit/UIKit.h>

#import <HXMeetingSDK3/HXMeetingParam.h>


@class HXShareRectModel;

NS_ASSUME_NONNULL_BEGIN

@interface HXShareInfoModel : NSObject

@property (nonatomic, strong) HXShareRectModel *shareRect;

// 共享类型，请参阅\link ShareType\endlink枚举。
@property (nonatomic, assign) HXShareType shareType;

// 要共享的屏幕名称。除非shareType的值为SHARE_TYPE_DESKTOP，否则它无效。
@property (nonatomic, copy) NSString *monitorName;

// 共享应用程序或白板的处理。除非shareType的值为SHARE_TYPE_APP或SHARE_TYPE_WHITE_BOARD，否则它无效。
@property (nonatomic, strong) NSArray <UIView *>*hwnds;


@end

NS_ASSUME_NONNULL_END
