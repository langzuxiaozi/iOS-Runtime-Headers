/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIButton : UIButton {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _hitTestOutset;
}

@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } hitTestOutset;

- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })hitTestOutset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setHitTestOutset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;

@end