/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaContentTasteItemUpdate : NSObject <NSSecureCoding, SSXPCCoding> {
    SSVMediaContentTasteItem * _item;
    NSDate * _updateDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) SSVMediaContentTasteItem *item;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *updateDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void)setUpdateDate:(id)arg1;
- (id)updateDate;

@end
