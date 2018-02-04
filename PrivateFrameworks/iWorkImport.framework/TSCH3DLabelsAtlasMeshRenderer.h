/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLabelsAtlasMeshRenderer : TSCH3DLabelsMeshRenderer {
    TSCH3DTextureAtlas * mAtlas;
    TSUNoCopyDictionary * mExternalAttributeVariables;
}

- (void)allocateDynamicResourcesIntoArray:(id)arg1;
- (void)beginResources:(id)arg1 samples:(float)arg2;
- (void)dealloc;
- (void)flushCache;
- (id)init;
- (unsigned long long)p_indexForExternalAttribute:(const struct ExternalLabelAttribute { id x1; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x2; void x3; void*x4; BOOL x5; void*x6; void*x7; float x8; long x9; out void*x10; void*x11; void*x12; void*x13; union { float x_14_1_1; float x_14_1_2; float x_14_1_3; } x14; union { float x_15_1_1; float x_15_1_2; float x_15_1_3; } x15; }*)arg1;
- (id)p_resourceAtIndex:(unsigned long long)arg1 childIndex:(unsigned long long)arg2 dimension:(unsigned long long)arg3 createIfAbsent:(bool)arg4;
- (unsigned long long)p_resourceCount;
- (id)p_resourceForExternalLabelAttribute:(const struct ExternalLabelAttribute { id x1; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x2; void x3; void*x4; BOOL x5; void*x6; void*x7; float x8; long x9; out void*x10; void*x11; void*x12; void*x13; union { float x_14_1_1; float x_14_1_2; float x_14_1_3; } x14; union { float x_15_1_1; float x_15_1_2; float x_15_1_3; } x15; }*)arg1 index:(unsigned long long)arg2 createIfAbsent:(bool)arg3;
- (void)p_submitExternalAttributesForIndex:(unsigned long long)arg1 processor:(id)arg2;
- (id)p_texcoordResourceAtIndex:(unsigned long long)arg1 createIfAbsent:(bool)arg2;
- (id)p_vertexResourceAtIndex:(unsigned long long)arg1 createIfAbsent:(bool)arg2;
- (void)renderWithMeshRenderLabelInfo:(const struct LabelsMeshRendererLabelInfo { id x1; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x2; void x3; void*x4; BOOL x5; void*x6; void*x7; float x8; long x9; out void*x10; void*x11; void*x12; void*x13; union { float x_14_1_1; float x_14_1_2; float x_14_1_3; } x14; union { float x_15_1_1; float x_15_1_2; float x_15_1_3; } x15; union { float x_16_1_1; float x_16_1_2; float x_16_1_3; } x16; }*)arg1;
- (void)submitResourcesWithProcessor:(id)arg1;

@end
