/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKPreviewAction : UIPreviewAction <WKPreviewActionItem> {
    NSString * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 style:(long long)arg3 handler:(id /* block */)arg4;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)identifier;

@end
