/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _NTKFamilyComplicationPair : NSObject <NSCopying> {
    NTKComplication * _complication;
    long long  _family;
}

@property (readonly) NTKComplication *complication;
@property (readonly) long long family;

+ (id)pairWithFamily:(long long)arg1 complication:(id)arg2;

- (void).cxx_destruct;
- (id)complication;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)family;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
