/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentPreference : NSObject {
    NSMutableDictionary * _errors;
    NSString * _footer;
    bool  _isReadOnly;
    NSArray * _preferences;
    unsigned long long  _selectedIndex;
    bool  _supportsDeletion;
    NSString * _title;
}

@property (nonatomic, retain) NSMutableDictionary *errors;
@property (nonatomic, copy) NSString *footer;
@property (nonatomic) bool isReadOnly;
@property (nonatomic, copy) NSArray *preferences;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic, readonly) bool supportsDeletion;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (void).cxx_destruct;
- (void)clearAllErrors;
- (id)errors;
- (id)errorsForPreference:(id)arg1;
- (id)footer;
- (id)initWithTitle:(id)arg1 preferences:(id)arg2 selectedIndex:(unsigned long long)arg3 readOnly:(bool)arg4;
- (bool)isReadOnly;
- (id)preferences;
- (unsigned long long)selectedIndex;
- (void)setErrors:(id)arg1;
- (void)setErrors:(id)arg1 forPreference:(id)arg2;
- (void)setFooter:(id)arg1;
- (void)setIsReadOnly:(bool)arg1;
- (void)setPreferences:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (bool)supportsDeletion;
- (id)title;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (bool)supportsInlineEditing;

@end
