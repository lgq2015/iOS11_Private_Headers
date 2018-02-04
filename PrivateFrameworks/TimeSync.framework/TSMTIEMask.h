/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSMTIEMask : NSObject {
    NSArray * _elements;
    NSString * _name;
}

@property (nonatomic, copy) NSArray *elements;
@property (nonatomic, copy) NSString *name;

+ (id)UDPHardwareMask;
+ (id)UDPSoftwareMask;
+ (id)gPTPMask1;
+ (id)gPTPMask2;
+ (id)gPTPMask3;

- (void)dealloc;
- (id)elements;
- (id)initWithDictionary:(id)arg1;
- (bool)mtieConformsToMask:(id)arg1 withErrors:(id*)arg2;
- (id)mtieMaskFromStart:(double)arg1 toEnd:(double)arg2 withStep:(double)arg3;
- (id)name;
- (void)setElements:(id)arg1;
- (void)setName:(id)arg1;

@end
