/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSCapacityBarCategory : NSObject <NSCopying> {
    unsigned long long  _bytes;
    UIColor * _color;
    NSString * _identifier;
    NSString * _title;
}

@property unsigned long long bytes;
@property (retain) UIColor *color;
@property (retain) NSString *identifier;
@property (retain) NSString *title;

- (void).cxx_destruct;
- (unsigned long long)bytes;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 color:(id)arg3 bytes:(long long)arg4;
- (void)setBytes:(unsigned long long)arg1;
- (void)setColor:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
