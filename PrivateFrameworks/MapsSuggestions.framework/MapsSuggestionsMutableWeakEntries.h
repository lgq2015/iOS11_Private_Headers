/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsMutableWeakEntries : NSObject {
    NSPointerArray * _array;
    bool  _dirty;
}

@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)addWeakObject:(id)arg1;
- (unsigned long long)count;
- (id)init;
- (id)initWithEntries:(struct NSArray { Class x1; }*)arg1;
- (struct NSArray { Class x1; }*)strongArray;
- (id)weakObjectAtIndex:(unsigned long long)arg1;

@end
