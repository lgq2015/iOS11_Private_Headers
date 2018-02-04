/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageLayerPrivate : NSObject {
    bool  allowUpdate;
    PDFTimer * forcedUpdateTimer;
    int  generationCount;
    NSObject<PDFPageLayerGeometryInterface> * geometryInterface;
    bool  isForcingUpdate;
    bool  isTiling;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  lastLayerFrameInRootView;
    double  lastLayoutZoomFactor;
    NSDate * lastZoomChange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  oldBoundsForBox;
    long long  oldPageRotation;
    PDFPage * page;
    NSMutableDictionary * pageLayerEffects;
    PDFRenderingProperties * renderingProperties;
    bool  requestedTiling;
    bool  tileLayerHidden;
    NSMutableArray * tiles;
    CALayer * tilesLayer;
    unsigned long long  visibilityDelegateIndex;
    bool  zoomChangeScheduled;
}

- (void).cxx_destruct;

@end
