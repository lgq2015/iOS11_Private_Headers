/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKInkManager : NSObject {
    NSMutableDictionary * _inks;
    unsigned long long  _version;
}

@property (nonatomic, readonly) NSMutableDictionary *inks;
@property (nonatomic, readonly) unsigned long long version;

+ (id)defaultInkManager;
+ (id)defaultInkManagerWithVersion:(unsigned long long)arg1;
+ (id)dictionaryForInk:(id)arg1;
+ (id)inkDictionary;
+ (void)reloadInks;

- (void).cxx_destruct;
- (id)initWithVersion:(unsigned long long)arg1;
- (id)inks;
- (unsigned long long)version;
- (void)writeDictionary:(id)arg1 forInk:(id)arg2;

@end
