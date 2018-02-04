/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _NTKSlotComplicationPair : NSObject <NSCopying> {
    NTKComplication * _complication;
    NSString * _slot;
}

@property (readonly) NTKComplication *complication;
@property (readonly, copy) NSString *slot;

+ (id)pairWithSlot:(id)arg1 complication:(id)arg2;

- (void).cxx_destruct;
- (id)complication;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)slot;

@end
