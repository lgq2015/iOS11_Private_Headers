/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKAxisLabel : NSObject {
    long long  _labelType;
    id  _location;
    NSString * _text;
}

@property (nonatomic) long long labelType;
@property (nonatomic, retain) id location;
@property (nonatomic, retain) NSString *text;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)labelType;
- (id)location;
- (void)setLabelType:(long long)arg1;
- (void)setLocation:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
