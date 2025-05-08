//
//  HXSDKWhiteBoardView.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2025/1/6.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN


@interface HXSDKWhiteBoardView : UIView

#pragma mark - action
#pragma mark 打开发起者白板
- (BOOL)openInitiatorWhiteBoard:(NSString *)whiteBoardId;

#pragma mark 打开参与者白板
- (BOOL)openAssistWhiteBoardWithWhiteBoardUuid:(NSString *)whiteBoardUuid WhiteBoardId:(NSString *)whiteBoardId;

#pragma mark 关闭白板
- (BOOL)closeWhiteBoard;


@end

NS_ASSUME_NONNULL_END
