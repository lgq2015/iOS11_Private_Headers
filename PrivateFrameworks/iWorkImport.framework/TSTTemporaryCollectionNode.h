/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTemporaryCollectionNode : NSObject {
    NSMutableArray * mChildren;
    struct TSCEVectorIndexPair { 
        unsigned short column; 
        unsigned short row; 
    }  mDimensions;
    unsigned long long  mFirstIndex;
    unsigned long long  mLastIndex;
    NSMutableArray * mWhitespaceAfterDelimiters;
    NSString * mWhitespaceBeforeFirstChild;
}

@property (nonatomic, retain) NSMutableArray *children;
@property (nonatomic) struct TSCEVectorIndexPair { unsigned short x1; unsigned short x2; } dimensions;
@property (nonatomic) unsigned long long firstIndex;
@property (nonatomic) unsigned long long lastIndex;
@property (nonatomic, retain) NSMutableArray *whitespaceAfterDelimiters;
@property (nonatomic, retain) NSString *whitespaceBeforeFirstChild;

- (id).cxx_construct;
- (id)children;
- (void)dealloc;
- (struct TSCEVectorIndexPair { unsigned short x1; unsigned short x2; })dimensions;
- (unsigned long long)firstIndex;
- (id)init;
- (unsigned long long)lastIndex;
- (void)setChildren:(id)arg1;
- (void)setDimensions:(struct TSCEVectorIndexPair { unsigned short x1; unsigned short x2; })arg1;
- (void)setFirstIndex:(unsigned long long)arg1;
- (void)setLastIndex:(unsigned long long)arg1;
- (void)setWhitespaceAfterDelimiters:(id)arg1;
- (void)setWhitespaceBeforeFirstChild:(id)arg1;
- (id)whitespaceAfterDelimiters;
- (id)whitespaceBeforeFirstChild;

@end