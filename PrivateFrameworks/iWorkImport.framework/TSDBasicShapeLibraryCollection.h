/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDBasicShapeLibraryCollection : NSObject <TSDShapeCollection> {
    TSDBasicShapeLibrary * _basicShapeLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long numberOfShapes;
@property (nonatomic, retain) TSDBasicShapeLibrary *p_basicShapeLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithBasicShapeLibrary:(id)arg1;
- (id)name;
- (unsigned long long)numberOfShapes;
- (id)p_basicShapeLibrary;
- (void)setP_basicShapeLibrary:(id)arg1;
- (id)shapeAtIndex:(unsigned long long)arg1;

@end
