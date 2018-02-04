/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIEmergencyCallServiceViewController : UIViewController <SBUIEmergencyCallServiceInterface> {
    long long  _backgroundStyle;
    UIColor * _tintColor;
}

@property (nonatomic) long long backgroundStyle;
@property (nonatomic, readonly) UIColor *tintColor;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (long long)backgroundStyle;
- (void)backgroundStyle:(id /* block */)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)noteTintColorForBackgroundStyleChanged:(id)arg1;
- (void)noteViewMovedOffscreenTemporarily;
- (void)setBackgroundStyle:(long long)arg1;
- (id)tintColor;

@end
