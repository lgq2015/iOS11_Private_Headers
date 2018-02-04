/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PrefsUILinkLabel : UILabel {
    NSURL * _URL;
    SEL  _action;
    id  _target;
    bool  _touchingURL;
    NSURL * _url;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic) SEL action;
@property (nonatomic) id target;

- (void).cxx_destruct;
- (id)URL;
- (SEL)action;
- (id)color:(id)arg1 byMultiplyingSubComponentsBy:(float)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)openURL:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)setURL:(id)arg1;
- (void)tappedLink:(id)arg1;
- (id)target;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
