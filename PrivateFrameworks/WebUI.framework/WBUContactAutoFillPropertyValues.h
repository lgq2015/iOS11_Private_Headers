/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUContactAutoFillPropertyValues : NSObject {
    NSString * _property;
    unsigned long long  _selectedIndex;
    NSArray * _values;
}

@property (nonatomic, readonly, copy) NSString *property;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic, readonly) WBUContactAutoFillValue *selectedValue;
@property (nonatomic, readonly, copy) NSArray *values;

- (void).cxx_destruct;
- (id)initWithValues:(id)arg1 property:(id)arg2;
- (id)property;
- (unsigned long long)selectedIndex;
- (id)selectedValue;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (id)values;

@end
