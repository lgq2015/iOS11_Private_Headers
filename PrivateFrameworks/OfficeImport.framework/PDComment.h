/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDComment : NSObject {
    NSString * _author;
    unsigned long long  mAuthorId;
    NSDate * mDate;
    unsigned int  mIndex;
    struct CGPoint { 
        double x; 
        double y; 
    }  mPosition;
    NSString * mText;
}

@property (nonatomic, retain) NSString *author;

- (id)author;
- (unsigned long long)authorId;
- (id)date;
- (void)dealloc;
- (id)description;
- (unsigned int)index;
- (id)init;
- (struct CGPoint { double x1; double x2; })position;
- (void)setAuthor:(id)arg1;
- (void)setAuthorId:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
