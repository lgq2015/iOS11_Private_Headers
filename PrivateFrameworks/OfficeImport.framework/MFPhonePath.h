/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPhonePath : MFPath {
    OITSUBezierPath * m_path;
    int  m_state;
}

- (int)abort;
- (void)appendBezierPath:(id)arg1 dc:(id)arg2;
- (int)begin;
- (int)closeFigure;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { double x1; double x2; })currentPoint;
- (void)dealloc;
- (int)end;
- (int)fill:(id)arg1;
- (int)flatten;
- (id)getBezierPath;
- (id)init;
- (id)initWithPath:(id)arg1 state:(int)arg2;
- (bool)isOpen;
- (int)state;
- (int)stroke:(id)arg1;
- (int)widen:(id)arg1;

@end
