//
//  HXSDKShareRenderView.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/12/6.
//

#import <UIKit/UIKit.h>

@class HXMeetingUserInfoModel;

NS_ASSUME_NONNULL_BEGIN

@interface HXSDKShareRenderView : UIView

- (BOOL)startShareRenderVideo:(NSString *)memberUuid;

- (BOOL)stopShareRenderVideo;

///设置观看的共享源memuuid
- (BOOL)setViewSharingSource:(NSString *)memberUuid;

///获取观看的共享源memuuid
- (NSString *)getViewSharingSource;

@end

NS_ASSUME_NONNULL_END
