/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVDialogResponse : NSObject <NSCopying, SSXPCCoding> {
    long long  _selectedButtonIndex;
    NSArray * _textFieldValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long selectedButtonIndex;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *textFieldValues;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (long long)selectedButtonIndex;
- (void)setSelectedButtonIndex:(long long)arg1;
- (void)setTextFieldValues:(id)arg1;
- (id)textFieldValues;

@end
