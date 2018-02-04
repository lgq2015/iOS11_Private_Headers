/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLDismissAction : NSObject {
    long long  _alertStyle;
    id /* block */  _completionHandler;
    bool  _shouldDismissQuickLookAutomatically;
    NSString * _title;
}

@property (nonatomic) long long alertStyle;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) bool shouldDismissQuickLookAutomatically;
@property (nonatomic, copy) NSString *title;

+ (id)actionWithTitle:(id)arg1 alertStyle:(long long)arg2 shouldDismissQuickLookAutomatically:(bool)arg3 handler:(id /* block */)arg4;
+ (id)actionWithTitle:(id)arg1 handler:(id /* block */)arg2;

- (void).cxx_destruct;
- (long long)alertStyle;
- (id /* block */)completionHandler;
- (id)initWithTitle:(id)arg1 alertStyle:(long long)arg2 shouldDismissQuickLookAutomatically:(bool)arg3 handler:(id /* block */)arg4;
- (void)setAlertStyle:(long long)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setShouldDismissQuickLookAutomatically:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldDismissQuickLookAutomatically;
- (id)title;

@end
