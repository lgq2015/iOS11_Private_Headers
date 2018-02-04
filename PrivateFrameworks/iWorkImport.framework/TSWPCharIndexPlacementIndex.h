/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPCharIndexPlacementIndex : NSObject {
    unsigned long long  _charIndex;
    TSWPDrawableAttachment * _drawableAttachment;
    int  _placementIndex;
}

@property (nonatomic) unsigned long long charIndex;
@property (nonatomic, retain) TSWPDrawableAttachment *drawableAttachment;
@property (nonatomic) int placementIndex;

- (void).cxx_destruct;
- (unsigned long long)charIndex;
- (long long)compare:(id)arg1;
- (id)drawableAttachment;
- (id)initWithCharIndex:(unsigned long long)arg1 placmentIndex:(int)arg2 drawableAttachment:(id)arg3;
- (int)placementIndex;
- (void)setCharIndex:(unsigned long long)arg1;
- (void)setDrawableAttachment:(id)arg1;
- (void)setPlacementIndex:(int)arg1;

@end
