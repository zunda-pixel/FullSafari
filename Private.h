@interface BrowserToolbar : NSObject
- (int)toolbarSize;
@property (nonatomic, retain) UIBarButtonItem *addTabItemManual;
@property (nonatomic, readonly) long long placement;
@end

@interface UIBarButtonItem (Extend)
- (BOOL)isSystemItem;
- (UIBarButtonSystemItem)systemItem;
@end

@interface GestureRecognizingBarButtonItem : UIBarButtonItem
@property (retain, nonatomic) UIGestureRecognizer *gestureRecognizer;
@end

@interface TabBar : UIView
+(double)defaultHeight;
@end

@interface TabController : NSObject
@property(readonly, retain, nonatomic) TabBar *tabBar;
@end

@interface BrowserController : UIResponder
@property(readonly, nonatomic) TabController *tabController;
@end
