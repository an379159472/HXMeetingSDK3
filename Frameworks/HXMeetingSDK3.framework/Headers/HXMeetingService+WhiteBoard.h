//
//  HXMeetingService+WhiteBoard.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2025/3/19.
//

#import <HXMeetingSDK3/HXMeetingService.h>

#import <UIKit/UIKit.h>

@class HXWhiteBoardPageModel;

NS_ASSUME_NONNULL_BEGIN

@interface HXMeetingService (WhiteBoard)
#pragma mark - 发起者
#pragma mark 发起者创建白板
- (NSString *)mainCreateCanvasWithWhiteBoardName:(NSString *)whiteBoardName Width:(int)width Height:(int)height;

#pragma mark 发起者销毁白板
- (BOOL)mainDestroyCanvas:(NSString *)whiteBoardId;

#pragma mark 发起者打开指定whiteBoardId的画布
- (BOOL)mainOpenCanvas:(NSString *)whiteBoardId View:(UIView *)view;

#pragma mark 发起者关闭白板画布接口
- (BOOL)mainCloseCanvas:(NSString *)whiteBoardId;

#pragma mark 发起者修改指定白板的名称
- (BOOL)mainRename:(NSString *)whiteBoardId WhiteBoardName:(NSString *)whiteBoardName;

#pragma mark 发起者变更画板尺寸
- (BOOL)mainResizeCanvas:(int)width Height:(int)height;

#pragma mark 发起者手机屏幕旋转 yes:横屏
- (BOOL)mainRotationScreen:(BOOL)isVertical;


#pragma mark 发起者白板内容缩放 scale 0.1-4.0 2.0表示缩放200%
- (BOOL)mainZoom:(float)scale;

#pragma mark 获取发起者白板缩放比例
- (float)mianGetZoom;

#pragma mark 发起者设置白板背景色
- (BOOL)mainSetBackColor:(NSString *)colorStr;

#pragma mark 发起者获取白板参与者列表
- (NSArray <HXMeetingUserInfoModel *>*)mainGetAssist;

#pragma mark 获取指定白板页的缩略图
- (void)mainGetThumbnail:(NSString *)whiteBoardId;

#pragma mark 获取当前白板的所有分页数据
- (NSMutableArray <HXWhiteBoardPageModel *> *)mainGetWhiteboards;

#pragma mark - 参与者
#pragma mark 参与者打开指定whiteBoardId的画布
- (BOOL)assistOpenCanvasWhitWhiteBoardId:(NSString *)whiteBoardId View:(UIView *)view;

#pragma mark 参与者关闭白板画布接口
- (BOOL)assistCloseCanvasWithWhiteBoardId:(NSString *)whiteBoardId;

#pragma mark 参与者白板内容缩放 scale 0.1-4.0 2.0表示缩放200%
- (BOOL)assistZoom:(float)scale;

#pragma mark 获取参与者白板缩放比例
- (float)assistGetZoom;

#pragma mark 参与者设置白板背景色
- (BOOL)assistSetBackColor:(NSString *)colorStr;

#pragma mark 参与者获取白板参与者列表
- (NSArray <HXMeetingUserInfoModel *>*)assistGetAssist;

#pragma mark 参与者获取指定白板页的缩略图
- (void)assistGetThumbnail:(NSString *)whiteBoardId;

#pragma mark 参与者获取当前白板的所有分页数据
- (NSMutableArray <HXWhiteBoardPageModel *> *)assistGetWhiteboards;

#pragma mark - 画板工具
#pragma mark 设置白板背景色
- (BOOL)setCanvasBackgroundColor:(HXCanvasColorType)type IsMain:(BOOL)isMain;

#pragma mark 获取白板背景色
- (HXCanvasColorType)getCanvasBackgroundColor;

#pragma mark 设置画笔类型
- (BOOL)setCanvasShapeType:(HXCanvasShapeType)type;

#pragma mark 获取画笔类型
- (HXCanvasShapeType)getCanvasShapeType;

#pragma mark 切换形状
- (BOOL)switchCanvasPenColor:(HXCanvasPenColorType)colorType WidthType:(HXCanvasPenWidthType)widthType FillType:(HXCanvasPenFillType)fillType;


#pragma mark 设置画笔颜色
- (BOOL)setCanvasPenColor:(HXCanvasPenColorType)type IsTranslucency:(BOOL)isTranslucency;

#pragma mark 获取画笔颜色
- (HXCanvasPenColorType)getCanvasPenColor;


#pragma mark 设置画笔粗细
- (BOOL)setCanvasPenWidth:(HXCanvasPenWidthType)type;

#pragma mark 获取画笔宽度
- (HXCanvasPenWidthType)getCanvasPenWidth;


#pragma mark 设置画笔填充类型
- (BOOL)setCanvasPenFill:(HXCanvasPenFillType)type;


#pragma mark 获取画笔填充类型
- (HXCanvasPenFillType)getCanvasPenFill;


#pragma mark 开始绘制
- (BOOL)canvasStartWithX:(float)x Y:(float)y;

#pragma mark 绘制中的坐标更新
- (BOOL)canvasDrawingWithX:(float)x Y:(float)y;

#pragma mark 结束本次绘制
- (BOOL)canvasEnd;

#pragma mark 撤销
- (BOOL)canvasUndo;

#pragma mark 获取是否能进行撤销操作
- (BOOL)canvasIsUndo;

#pragma mark 重做
- (BOOL)canvasRedo;

#pragma mark 获取是否能进行重做操作
- (BOOL)canvasIsRedo;

#pragma mark 清除白板
- (BOOL)canvasClear:(HXClearWhiteBoardType)type;

#pragma mark 判断是否能够清除白板
- (BOOL)canvasCanClear:(HXClearWhiteBoardType)type;

#pragma mark 从文件读取白板画布 fileName 路径+文件名
- (BOOL)canvasLoad:(NSString *)fileName;

#pragma mark 保存白板画布到文件 fileName 路径+文件名
- (BOOL)canvasSave:(NSString *)fileName;

#pragma mark 获取当前白板的唯一标识
- (NSString *)canvasGetWhiteBoardId;
@end

NS_ASSUME_NONNULL_END
