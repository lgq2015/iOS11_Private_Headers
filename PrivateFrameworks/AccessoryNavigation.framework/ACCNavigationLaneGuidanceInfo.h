/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessoryNavigation.framework/AccessoryNavigation
 */

@interface ACCNavigationLaneGuidanceInfo : NSObject {
    NSMutableDictionary * _infoDict;
}

@property (retain) NSMutableDictionary *infoDict;

+ (id)keyForType:(unsigned short)arg1;

- (void).cxx_destruct;
- (bool)_checkDataClassForType:(unsigned short)arg1 data:(id)arg2;
- (id)copyDictionary;
- (id)copyInfo:(unsigned short)arg1;
- (id)infoDict;
- (id)init;
- (bool)setInfo:(unsigned short)arg1 data:(id)arg2;
- (void)setInfoDict:(id)arg1;

@end
