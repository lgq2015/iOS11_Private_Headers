/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAVFill : NSObject

+ (void)addStopsFromArray:(const struct OAVGradientStop { id x1; }*)arg1 stopCount:(int)arg2 inverted:(bool)arg3 startPos:(float)arg4 endPos:(float)arg5 toGradientFill:(id)arg6 manager:(id)arg7;
+ (id)readBlipRefFromManager:(id)arg1 state:(id)arg2;
+ (id)readFromManager:(id)arg1 state:(id)arg2;
+ (void)readGradientFill:(id)arg1 fromManager:(id)arg2;
+ (void)readImageFill:(id)arg1 fromManager:(id)arg2 state:(id)arg3;
+ (id)targetBgColorWithManager:(id)arg1;
+ (id)targetFgColorWithManager:(id)arg1;

@end
