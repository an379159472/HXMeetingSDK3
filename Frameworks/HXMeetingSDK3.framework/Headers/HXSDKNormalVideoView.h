//
//  HXSDKNormalVideoView.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/10/21.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HXSDKNormalVideoView : UIView

@property (nonatomic, strong) NSString * memberUuid;

@property (nonatomic, copy) void (^activeChangeBlock)(BOOL isActive);

@property (nonatomic, copy) void (^subscribeFailBlock)(NSString * memUuid ,NSString * errMsg);

///订阅； layout 264 : 0 = 小流  1|2 = 大流；vp9: 0 = 低层 1 = 中层 2 = 高层
- (BOOL)sbuscribeVideo:(NSString *)memberUuid Layout:(int)layout;

- (BOOL)unsbuscribeVideo;
@end

NS_ASSUME_NONNULL_END
