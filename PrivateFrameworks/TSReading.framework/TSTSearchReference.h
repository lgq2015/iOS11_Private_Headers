/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSTSearchReference : NSObject <TSKSearchReference> {
    bool  _autohideHighlight;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  _cellID;
    NSArray * _findHighlights;
    bool  _pulseHighlight;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    TSTTableInfo * _tableInfo;
    <TSKAnnotation> * annotation;
    struct CGPoint { 
        double x; 
        double y; 
    }  searchReferencePoint;
}

@property (nonatomic, retain) <TSKAnnotation> *annotation;
@property (nonatomic) bool autohideHighlight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *findHighlights;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool pulseHighlight;
@property (nonatomic) struct CGPoint { double x1; double x2; } searchReferencePoint;
@property (readonly) Class superclass;

+ (id)searchReferenceWithTableInfo:(id)arg1 cellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

- (id)annotation;
- (bool)autohideHighlight;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })cellID;
- (id)commandForReplacingWithString:(id)arg1 options:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)findHighlights;
- (id)initWithTableInfo:(id)arg1 cellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)isEqual:(id)arg1;
- (bool)isReplaceable;
- (id)model;
- (bool)pulseHighlight;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)searchReferenceEnd;
- (id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 authorCreatedWithCommand:(id*)arg3;
- (struct CGPoint { double x1; double x2; })searchReferencePoint;
- (id)searchReferenceStart;
- (id)selection;
- (void)setAnnotation:(id)arg1;
- (void)setAutohideHighlight:(bool)arg1;
- (void)setCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)setFindHighlights:(id)arg1;
- (void)setPulseHighlight:(bool)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSearchReferencePoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)tableInfo;

@end
