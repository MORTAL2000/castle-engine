#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>

class GLWidget;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void UpdateNavigationButtons();
    void UpdateAfterSceneLoaded();
    void MoveToViewpoint(int nView);

private:
    Ui::MainWindow *ui;
    GLWidget *m_pGlWidget;
    int m_nViewpointCount, m_iCurrentViewpoint;

private slots:
    void OnFileOpenClick();
    void OnWalkClick();
    void OnFlyClick();
    void OnExamineClick();
    void OnTurntableClick();
    void OnMoveToViewpointClick();
    void OnNextViewClick();
    void OnPrevViewClick();
    void MenuSoftShadowsClick();
    void MenuAntiAliasingClick();
    void MenuWalkingEffectClick();
    void MenuMouseLookClick();
    void MenuShowLogClick();
    void MenuOpenGLInfoClick();
};

class ActionWithTag : public QAction
{
    Q_OBJECT
public:
    int m_nTag;

    explicit ActionWithTag(QString const& sCaption, int nTag, QObject * parent);
};

#endif // MAINWINDOW_H
