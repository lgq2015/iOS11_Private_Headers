/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKCache : NSObject <CKCache> {
    NSMutableDictionary * _dictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)dictionary;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)setDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
