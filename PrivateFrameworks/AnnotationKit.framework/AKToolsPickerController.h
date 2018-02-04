/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKToolsPickerController : NSObject {
    AKController * _controller;
    UINavigationController * _navController;
    UIViewController * _toolsListController;
}

@property AKController *controller;
@property (nonatomic, retain) UINavigationController *navController;
@property (nonatomic, retain) UIViewController *toolsListController;

- (void).cxx_destruct;
- (id)controller;
- (id)initWithController:(id)arg1;
- (id)navController;
- (void)setController:(id)arg1;
- (void)setNavController:(id)arg1;
- (void)setToolsListController:(id)arg1;
- (id)toolsListController;

@end
