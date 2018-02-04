/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSConsolidatedDialog : NSObject <NSCopying, SSXPCCoding> {
    NSString * _cancelLabel;
    NSString * _reason;
    NSString * _title;
}

@property (copy) NSString *cancelLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSString *reason;
@property (readonly) Class superclass;
@property (copy) NSString *title;

- (void).cxx_destruct;
- (id)cancelLabel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)reason;
- (void)setCancelLabel:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
