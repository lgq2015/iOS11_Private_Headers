/* made by EzioChiu
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCEventViewController : UIViewController {
    bool  _controllerUserInteractionEnabled;
}

@property (nonatomic) bool controllerUserInteractionEnabled;

- (bool)controllerUserInteractionEnabled;
- (void)setControllerUserInteractionEnabled:(bool)arg1;

@end
