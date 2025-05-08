//
//  HXSDKActionVideoView.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/12/4.
//

#import <UIKit/UIKit.h>

@class HXMeetingUserInfoModel;

NS_ASSUME_NONNULL_BEGIN

@interface HXSDKActiveVideoView : UIView

@property (nonatomic, copy) void (^activeMemberChange)(NSString * memUuid);


- (BOOL)startShowActiveVideo;

- (BOOL)stopShowActiveVideo;

- (NSString *)getCurrentMemid;
@end

NS_ASSUME_NONNULL_END
