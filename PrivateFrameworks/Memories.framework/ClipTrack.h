/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface ClipTrack : NSObject {
    int  _clipType;
    NSMutableArray * _clips;
    int  _trackID;
}

+ (id)nameForClipType:(int)arg1 trackID:(int)arg2;

- (void).cxx_destruct;
- (void)addClip:(id)arg1;
- (int)clipType;
- (id)clips;
- (long long)indexOfClip:(id)arg1;
- (id)initWithClipType:(int)arg1 trackID:(int)arg2;
- (void)insertClip:(id)arg1 atIndex:(long long)arg2;
- (void)removeClip:(id)arg1;
- (id)trackName;

@end
