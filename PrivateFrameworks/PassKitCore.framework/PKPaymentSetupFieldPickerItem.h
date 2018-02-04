/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSetupFieldPickerItem : NSObject <NSCopying> {
    NSString * _localizedDisplayName;
    NSString * _submissionValue;
}

@property (nonatomic, readonly, copy) NSString *localizedDisplayName;
@property (nonatomic, readonly, copy) NSString *submissionValue;

+ (id)_itemWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (id)localizedDisplayName;
- (id)submissionValue;

@end
