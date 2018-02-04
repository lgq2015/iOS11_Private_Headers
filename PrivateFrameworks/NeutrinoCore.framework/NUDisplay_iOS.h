/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUDisplay_iOS : NSObject <NUDisplay> {
    CADisplay * _display;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CADisplay *display;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) struct { long long x1; long long x2; } size;
@property (readonly) Class superclass;

+ (id)displays;

- (void).cxx_destruct;
- (id)description;
- (id)display;
- (id)init;
- (id)initWithCADisplay:(id)arg1;
- (id)name;
- (struct { long long x1; long long x2; })size;

@end
