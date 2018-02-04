/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@interface PKSupply : NSObject {
    NSArray * _colors;
    int  _highLevel;
    int  _level;
    int  _lowLevel;
    NSString * _markerType;
    NSString * _name;
    unsigned long long  _supplyType;
}

@property (nonatomic, retain) NSArray *colors;
@property (nonatomic) int highLevel;
@property (nonatomic) int level;
@property (nonatomic) int lowLevel;
@property (nonatomic, retain) NSString *markerType;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long supplyType;

+ (bool)isValidColorString:(const char *)arg1;
+ (unsigned long long)numRequiredIPPAttributes;
+ (const char **)requiredIPPAttributes;
+ (id)suppliesForIPPResponse:(struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)arg1;

- (void).cxx_destruct;
- (id)colors;
- (id)description;
- (int)highLevel;
- (id)initWithName:(const char *)arg1 markerType:(const char *)arg2 colors:(const char *)arg3 level:(int)arg4 lowLevel:(int)arg5 highLevel:(int)arg6;
- (int)level;
- (int)lowLevel;
- (id)markerType;
- (id)name;
- (void)setColors:(id)arg1;
- (void)setHighLevel:(int)arg1;
- (void)setLevel:(int)arg1;
- (void)setLowLevel:(int)arg1;
- (void)setMarkerType:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSupplyType:(unsigned long long)arg1;
- (unsigned long long)supplyType;

@end
