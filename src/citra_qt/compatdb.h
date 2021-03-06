// Copyright 2017 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <memory>
#include <QWizard>

namespace Ui {
class CompatDB;
}

class CompatDB : public QWizard {
    Q_OBJECT

public:
    explicit CompatDB(QWidget* parent = nullptr);
    ~CompatDB();

private:
    std::unique_ptr<Ui::CompatDB> ui;

private slots:
    void Submit();
    void EnableNext();
};
